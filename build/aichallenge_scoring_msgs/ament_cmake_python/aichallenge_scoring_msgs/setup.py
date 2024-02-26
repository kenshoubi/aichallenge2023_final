from setuptools import find_packages
from setuptools import setup

setup(
    name='aichallenge_scoring_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('aichallenge_scoring_msgs', 'aichallenge_scoring_msgs.*')),
)
