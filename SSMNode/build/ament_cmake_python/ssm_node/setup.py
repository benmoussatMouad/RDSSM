from setuptools import find_packages
from setuptools import setup

setup(
    name='ssm_node',
    version='0.0.0',
    packages=find_packages(
        include=('ssm_node', 'ssm_node.*')),
)
